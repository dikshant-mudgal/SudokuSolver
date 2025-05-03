# 🧩 Sudoku Solver (C++)

This is a C++ console application that solves **classic 9×9 Sudoku puzzles** using the **backtracking algorithm**.  
It accepts the board as user input (with `0` for blank spaces) and prints the solved Sudoku if a solution exists.

---

## 🚀 Features

- Solves any valid 9x9 Sudoku puzzle
- Takes input directly from the user
- Uses backtracking with smart validation
- Neatly displays both original and solved boards

---

## 🧠 Algorithm

This program uses **recursive backtracking** to:
1. Find the first empty cell
2. Try placing digits `1–9` if valid (row, column, 3×3 box)
3. Recurse until solved or backtrack when stuck

---

## 📥 Input Format

- You enter **9 rows**, each containing **9 digits** separated by space.
- Use `0` to indicate an **empty cell**.

---

## 🛠️ Compilation and Usage

### 🧾 Compile (using g++)
```bash
g++ sudoku_solver.cpp -o sudoku_solver
