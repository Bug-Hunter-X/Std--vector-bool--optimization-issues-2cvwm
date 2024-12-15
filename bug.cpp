std::vector<bool> vec(100); //This can cause issues due to space optimization
for (int i = 0; i < vec.size(); i++) {
  if (vec[i]) {
    //Process
  }
}