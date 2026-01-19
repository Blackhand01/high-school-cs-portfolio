# C++ Matrices

Matrix operations and two-dimensional data structures.

## 📁 Structure

### `magic-square/`
Magic square algorithm implementations - **Multiple versions showing refinement**:
- `magic-square-v1.cpp` - Initial implementation
- `magic-square-bisignano-ferrara.cpp` - Collaborative version
- `magic-square-final.cpp` - Optimized final version

**Features**:
- Generate magic squares of odd order
- Verify magic square properties
- Display formatted output
- Handle various sizes

### `matrix-operations/`
General matrix computations:
- `matrix-functions.cpp` - Matrix multiplication, transpose, etc.

## 🎯 Learning Objectives

- 2D array manipulation
- Nested loops and indexing
- Mathematical properties and validation
- Algorithm design for matrix operations
- Code optimization

## 🚀 How to Compile

```bash
g++ -o magic-square magic-square-final.cpp
./magic-square
```

## 📊 Difficulty Level

**Intermediate to Advanced** - Requires strong understanding of nested loops and 2D arrays

## 📚 Mathematical Background

A magic square is an n×n grid of positive integers where:
- Each row sums to the same value (magic constant)
- Each column sums to the same value
- Both diagonals sum to the same value
- Magic constant = n(n² + 1)/2
