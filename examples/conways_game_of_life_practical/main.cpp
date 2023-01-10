#include <chrono>
#include <thread>

#include "grid.h"

#define SLEEP 250

// Uncomment if running in Windows Console
//#include "ansi_escapes.h"

int main(int argc, char *argv[]) {
  std::cout << "Conway's game of Life\n";
  std::cout << "Press the return key to display each generation\n";

  // Get random factor from user
  int rand_factor;
  std::cout << "Please enter the random factor (one in how many cells should "
               "be populated?)\n";
  std::cin >> rand_factor;

  // Uncomment if running in Windows Console
  // Enable ANSI escape codes on Windows
  // setupConsole();

  // Grid for the first generation
  grid current_generation;

  // Populate the cells at random
  current_generation.randomize(rand_factor);

  bool stop{false};
  while (!stop) {
    // Draw the current generation
    current_generation.draw();

    std::this_thread::sleep_for(std::chrono::milliseconds(SLEEP));

    // Grid for the next generation
    grid next_generation;

    // Populate the cells in the next generation
    calculate(current_generation, next_generation);
    if (current_generation.is_equal(next_generation)) {
      stop = true;
    }

    // Update to the next generation
    current_generation.update(next_generation);
  }

  // Move cursor to bottom of screen
  std::cout << "\x1b[" << 0 << ";" << rowmax - 1 << "H";

  // Uncomment if running in Windows Console
  // Restore console on Windows
  // restoreConsole();
}
