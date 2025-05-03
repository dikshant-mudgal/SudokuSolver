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
```

▶️ Run
```bash
./sudoku_solver
```

📌 Example
**Input Puzzle:**

| 5 | 3 | 0 | | 0 | 7 | 0 | | 0 | 0 | 0 |
|---|---|---|---|---|---|---|---|---|---|---|---|
| 6 | 0 | 0 | | 1 | 9 | 5 | | 0 | 0 | 0 |
| 0 | 9 | 8 | | 0 | 0 | 0 | | 0 | 6 | 0 |
|---|---|---|---|---|---|---|---|---|---|---|---|
| 8 | 0 | 0 | | 0 | 6 | 0 | | 0 | 0 | 3 |
| 4 | 0 | 0 | | 8 | 0 | 3 | | 0 | 0 | 1 |
| 7 | 0 | 0 | | 0 | 2 | 0 | | 0 | 0 | 6 |
|---|---|---|---|---|---|---|---|---|---|---|---|
| 0 | 6 | 0 | | 0 | 0 | 0 | | 2 | 8 | 0 |
| 0 | 0 | 0 | | 4 | 1 | 9 | | 0 | 0 | 5 |
| 0 | 0 | 0 | | 0 | 8 | 0 | | 0 | 7 | 9 |

**Solved Sudoku Board:**

| 7 | 8 | 5 | | 4 | 3 | 9 | | 1 | 2 | 6 |
|---|---|---|---|---|---|---|---|---|---|---|---|
| 6 | 1 | 2 | | 8 | 7 | 5 | | 3 | 4 | 9 |
| 4 | 9 | 3 | | 6 | 1 | 2 | | 7 | 8 | 5 |
|---|---|---|---|---|---|---|---|---|---|---|---|
| 8 | 5 | 7 | | 9 | 4 | 3 | | 2 | 6 | 1 |
| 6 | 1 | 7 | | 5 | 8 | 9 | | 3 | 4 | 2 |
| 5 | 8 | 9 | | 3 | 4 | 2 | | 6 | 1 | 7 |
|---|---|---|---|---|---|---|---|---|---|---|---|
| 5 | 7 | 8 | | 3 | 9 | 4 | | 6 | 1 | 2 |
| 6 | 1 | 2 | | 5 | 8 | 7 | | 4 | 9 | 3 |
| 4 | 9 | 3 | | 6 | 1 | 2 | | 8 | 5 | 7 |
