#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

vector<char> xorCipher(const vector<char>& data, const string& key)
{
    vector<char> result(data.size());

    for (size_t i = 0; i < data.size(); i++)
    {
        result[i] = data[i] ^ key[i % key.size()];
    }

    return result;
}

int main()
{
    string key = "secretkey";

    ifstream input("input.txt", ios::binary);
    vector<char> data((istreambuf_iterator<char>(input)),
        istreambuf_iterator<char>());
    input.close();

    vector<char> encrypted = xorCipher(data, key);

    ofstream outEnc("encrypted.bin", ios::binary);
    outEnc.write(encrypted.data(), encrypted.size());
    outEnc.close();

    cout << "Titkosítás kész!" << endl;

    vector<char> decrypted = xorCipher(encrypted, key);

    ofstream outDec("decrypted.txt", ios::binary);
    outDec.write(decrypted.data(), decrypted.size());
    outDec.close();

    cout << "Kész!" << endl;

    return 0;
}