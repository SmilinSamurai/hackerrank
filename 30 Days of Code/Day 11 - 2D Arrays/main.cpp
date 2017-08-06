#include <climits>
#include <iostream>
#include <vector>
using namespace std;

#define SIZE_OF_ARRAY 6
#define SIZE_HOURGLASS 3

int main() {
  vector<vector<int>> arr(6, vector<int>(6));

  for (int arr_i = 0; arr_i < 6; arr_i++) {
    for (int arr_j = 0; arr_j < 6; arr_j++) {
      cin >> arr[arr_i][arr_j];
    }
  }
  int max_sum = INT_MIN;
  for (int i = 0; i < (SIZE_OF_ARRAY - SIZE_HOURGLASS) + 1; i++) {   // ROW
    for (int j = 0; j < (SIZE_OF_ARRAY - SIZE_HOURGLASS) + 1; j++) { // COLUMN
      int sum_of_hour = 0;
      // Top of the hourglass
      for (int k = j; k < (j + SIZE_HOURGLASS); k++) {
        sum_of_hour += arr[i][k];
      }

      // Middle of the hourglass
      sum_of_hour += arr[i + 1][j + 1];

      // Bottom of the hourglass
      for (int k = j; k < (j + SIZE_HOURGLASS); k++) {
        sum_of_hour += arr[(i + SIZE_HOURGLASS) - 1][k];
      }

      if (sum_of_hour > max_sum) {
        max_sum = sum_of_hour;
      }
    }
  }
  cout << max_sum;
}
