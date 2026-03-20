# 🧗 Staircase Climber Project

## 📌 Overview

This project explores a classic problem in recursion and dynamic programming:

> Given a staircase of `n` steps, how many distinct ways can you reach the top if you can take **1, 2, or 3 steps at a time**?

Each sequence of steps counts as a **unique path** (e.g., `1 + 2` is different from `2 + 1`).

---

## 🎯 Objectives

This project is divided into three parts:

### 🔹 Part A — Basic Counting

Find the total number of distinct ways to climb a staircase of **20 steps**.

---

### 🔹 Part B — Constraint Handling

Modify the problem such that:

* The **7th step is broken**
* You **cannot land on it**, but you may jump over it

Compute the number of valid ways to reach the top under this constraint.

---

### 🔹 Part C — Pattern Recognition

Analyze the number of ways for small values of `n`:

```
n = 1, 2, 3, 4, 5, ...
```

Identify the pattern formed by the sequence of results.

---

## 🧠 Key Concepts Used

* **Recursion**
  Breaking the problem into smaller subproblems.

* **Backtracking**
  Generating all possible step sequences.

* **Memoisation (Dynamic Programming)**
  Storing previously computed results to improve efficiency.

* **Combinatorics & Pattern Recognition**
  Understanding growth patterns in recursive sequences.

---

## 🔍 Observations

* The number of ways to reach step `n` depends on:

  * ways to reach `n-1`
  * ways to reach `n-2`
  * ways to reach `n-3`

* This leads to a recurrence relation:

```
ways(n) = ways(n-1) + ways(n-2) + ways(n-3)
```

* The sequence formed resembles the **Tribonacci sequence**

---

## 🏁 Conclusion

This problem is a great introduction to:

* recursive thinking
* dynamic programming
* pattern recognition in algorithms

It demonstrates how a simple problem can scale into more complex scenarios with constraints.

---
