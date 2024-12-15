#include <iostream>
#include <vector>
#include <chrono>

int main() {
  // Using std::vector<char> to avoid space optimization issues
  std::vector<char> vec(100);
  auto start = std::chrono::high_resolution_clock::now();
  for (int i = 0; i < vec.size(); i++) {
    if (vec[i]) {
      //Process
    }
  }
  auto end = std::chrono::high_resolution_clock::now();
  auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
  std::cout << "Time taken for std::vector<char>: " << duration.count() << " microseconds" << std::endl;

  //Using bitset for comparison
  std::bitset<100> bitVec;
  start = std::chrono::high_resolution_clock::now();
  for(int i = 0; i < 100; i++){
    if(bitVec[i]) {
      //Process
    }
  }
  end = std::chrono::high_resolution_clock::now();
  duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
  std::cout << "Time taken for std::bitset: " << duration.count() << " microseconds" << std::endl; 
  return 0;
}