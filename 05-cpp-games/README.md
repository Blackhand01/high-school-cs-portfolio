# C++ Games

Game development projects demonstrating algorithmic thinking and complex data structures.

## 📁 Structure

### `tombola-lottery/`
Italian lottery simulator (Tombola/Bingo) - **Comprehensive game project with multi-player support**

**Files**:
- `tombola-v1.cpp` - Initial implementation
- `tombola-bisignano-mode.cpp` - Personal variation
- `tombola-final.cpp` - Production version
- `cards-generator.cpp` - Generate player cards
- `column-row-border.cpp` - Render game board UI
- `multi-player-cases/` - Support for 1-6 players
- `table-variants/` - Different board configurations

**Features**:
- Generate random numbers and draw sequence
- Multi-player game management (2-7 players)
- Card generation and validation
- Scoring and winner detection
- Console UI with formatted output

### `frame-game/`
Border-based strategy game with configurable players and screen sizes

**Files**:
- `frame-2/3/4/5/6/7-players-small/fullscreen.cpp` - Various configurations
- Support for 2-7 players
- Small screen (80x24) and fullscreen (1920x1080) variants

**Features**:
- Turn-based gameplay
- Border drawing and validation
- Player move tracking
- Win condition detection

## 🎯 Learning Objectives

- Complex game logic and state management
- Multi-dimensional arrays for game boards
- Player management and turn systems
- Algorithm design for game rules
- User interface and output formatting
- Scalable code architecture

## 🚀 How to Compile

```bash
# Tombola game
g++ -o tombola tombola-final.cpp
./tombola

# Frame game
g++ -o frame frame-2-players-fullscreen.cpp
./frame
```

## 🎮 Game Rules

### Tombola (Italian Lottery)
1. Each player receives a card with 15 numbers (1-90)
2. Numbers are drawn randomly
3. Players mark matching numbers
4. First to complete a row/column/full card wins

### Frame Game
1. Players take turns drawing borders
2. Complete a box and score a point
3. Last player to complete boxes wins

## 📊 Difficulty Level

**Advanced** - Integrates complex algorithms, data structures, and game logic
