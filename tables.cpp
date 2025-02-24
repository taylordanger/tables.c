//just a c++ version of the tables function... seriously just throw this in a program and BAM!! progress bar

void print_progress(size_t count, size_t max) {
  const int bar_width = 20;

  float progress = static_cast<float>(count) / max;
  int bar_length = progress * bar_width;

  cout << "\r(╯°□°)╯︵:";
  for (int i = 0; i < bar_length; ++i) {
      cout << "┻━┻";
  }
  for (int i = bar_length; i < bar_width; ++i) {
      cout << " ";
      
  }
  cout << "┬─┬ノ(º _ ºノ) " << fixed << setprecision(0) << progress * 100 << "%";
  cout.flush();

}
