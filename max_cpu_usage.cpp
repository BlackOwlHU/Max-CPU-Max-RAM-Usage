#include <iostream>
#include <thread>
#include <vector>

using namespace std;

void cpu_work() {
    cout << "CPU intensive work load started." << endl;
    volatile unsigned long long counter = 0;
    while (true) { 
        counter++; 
    }
}

int main() { 
    const int cpu_threads = thread::hardware_concurrency();
    vector<thread> threads;

    cout << "CPU threads available: " << cpu_threads << endl;

    for (int i = 0; i < cpu_threads; ++i) { 
        threads.emplace_back(cpu_work);
    }

    for (auto& t : threads) { 
        t.join(); 
    }

    return 0;
}