#ifndef FAKE_SEMAPHORE_H
#define FAKE_SEMAPHORE_H

#include <mutex>
#include <condition_variable>


class fake_semaphore
{
private:
    std::mutex mutex_;
    std::condition_variable condition_;
    unsigned long count_;

public:
    fake_semaphore() : count_(0) {}

    void notify()
    {
        std::unique_lock<std::mutex> lock(mutex_);
        ++count_;
        condition_.notify_one();
    }

    void wait()
    {
        std::unique_lock<std::mutex> lock(mutex_);
        while(!count_)
            condition_.wait(lock);
        --count_;
    }
};

#endif // FAKE_SEMAPHORE_H
