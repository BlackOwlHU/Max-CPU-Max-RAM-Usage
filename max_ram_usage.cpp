#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int main() {
    vector<char*> memory;
    size_t total = 0;

    while (true) {
        char* block = new char[1024 * 1024];
        memset(block, 0, 1024 * 1024);
        memory.push_back(block);

        total++;
        cout << "Használt memória: " << total << " MB" << endl;
    }

    return 0;
}
