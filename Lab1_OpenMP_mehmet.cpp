#include <iostream>
#include <omp.h>

using namespace std;

int main() {
    int numThreads = omp_get_max_threads();
    cout << "Number of threads: " << numThreads << endl;

#pragma omp parallel for
    for (int i = 0; i < 4; i++) {
        cout << "Thread " << omp_get_thread_num() << ": Hello world, Mehmet Kulubecioglu!!!" << endl;
    }

    return 0;
}
