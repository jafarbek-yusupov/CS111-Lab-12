#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

/* =====================================================
Problem 1: Integer Hash Code
-----------------------------------------------------
Description:
Return the hash code for an integer key.
In this lab, the hash code of an integer is simply
the integer itself.
===================================================== */
int hashCodeInt(int key) {
  return key;
}

/* =====================================================
Problem 2: String Hash Code (Polynomial Accumulation)
-----------------------------------------------------
Description:
Use polynomial accumulation with a = 33.
Formula: h(s) = s_0 + s_1*a + s_2*a^2 + ... + s_{k-1}*a^{k-1}
===================================================== */
int hashCodeString(const string& s) {
  int a = 33; 
  int h=0;
  for(char c: s){
    h = h*a + int(c);
  }
  return h;
}

/* =====================================================
Problem 3: Compression Functions
-----------------------------------------------------
Description:
Compress hash codes to table indices in [0, N-1]
using Division and MAD methods:
- Division: |y| mod N
- MAD: |a*y + b| mod N
===================================================== */
int compressDivision(int hashCode, int N) {
  return abs(hashCode)%N;
}

int compressMAD(int hashCode, int N, int a, int b) {
  return abs(a*hashCode + b)%N;
}

/* =====================================================
Problem 4: Student Records (Collisions Example)
-----------------------------------------------------
Description:
Map each student ID to an index using:
index = ID mod 10
Print the mapping and observe collisions.
===================================================== */
int main() {
  /* ---------------- Problem 1 ---------------- */
  cout << "[Problem 1] Integer hash codes:\n";
  vector<int> intKeys = {18, 41, 22, 44, 59};
  // TODO: print each key and its hash code
  /* ---------------- Problem 2 ---------------- */
  cout << "\n[Problem 2] String hash codes (a = 33):\n";
  vector<string> strKeys = {"stop", "tops", "pots", "spot", "post"};
  // TODO: print each string and its hash code
  /* ---------------- Problem 3 ---------------- */
  cout << "\n[Problem 3] Compression examples:\n";
  int N = 53; // prime table size
  int a = 31; // MAD parameters
  int b = 7;
  // TODO: compute indices for integers and strings
  // using both Division and MAD compression
  // and print the results in a table format
  /* ---------------- Problem 4 ---------------- */
  cout << "\n[Problem 4] Student records (h(id) = id mod 10):\n";
  int studentId[] = {1400, 1401, 1402, 1552, 1398, 1399};
  string studentName[] = {"Ali", "Sara", "John", "Emily", "Hasan", "Layla"};
  float studentGpa[] = {3.5f, 3.9f, 2.7f, 3.2f, 3.8f, 2.9f};
  int studentCount = 6;
  int Nstudents = 10;
  // TODO:
  // 1. compute index = id % Nstudents for each student
  // 2. print ID, Name, GPA, and index
  return 0;
}
