#include <algorithm> // copy
#include <fstream>   // ifstream
#include <iostream>  // cout
#include <iterator>  // input_iterator
#include <numeric>   // accumulate

using namespace std;

template<typename Iter, typename F>
void for_all(Iter begin, Iter end, F f) {
    for (; begin != end; ++begin) {
        f(*begin);
    }
}

//int main() {
//    std::vector<std::string> text{"aap", "noot", "mies"};
//    for_all(text.begin(), text.end(),
//            [](const std::string &s) {
//                std::cout << s << "\n";
//            });
//}
