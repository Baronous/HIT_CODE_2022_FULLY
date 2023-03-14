#include <iostream>
using namespace std;

// Function to print a circle
void printCircle(int n) {
  // Distance between each point
  double dist;
  // Iterate through rows
  for (int i = 0; i <= 2 * n; i++) {
    // Iterate through columns
    for (int j = 0; j <= 2 * n; j++) {
      // Calculate distance from center
      dist = sqrt((i - n) * (i - n) + (j - n) * (j - n));
      // Check if distance is equal to radius
      if (dist > n - 0.5 && dist < n + 0.5)
        cout << "*";
      else
        cout << " ";
    }
    cout << "\n";
  }
}

// Driver code
int main() {
  int n = 6;
  printCircle(n);
}
