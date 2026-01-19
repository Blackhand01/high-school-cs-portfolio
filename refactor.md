# Repository Refactor Plan

## Current State Analysis
The repository contains two main categories of projects:
- **Arduino Projects** (embedded systems, sensors, circuits)
- **C++ Programs** (Informatica - computer science coursework)

The current structure mixes Italian and inconsistent naming conventions, with deep nested folders that make navigation difficult.

---

## Proposed Structure

```
high-school-cs-portfolio/
│
├── README.md
├── refactor.md
│
├── 01-cpp-fundamentals/
│   ├── README.md
│   ├── basic-algorithms/
│   │   ├── armstrong-numbers.cpp
│   │   ├── fibonacci-series.cpp
│   │   ├── sum-repetitions.cpp
│   │   ├── square-decomposition.cpp
│   │   └── number-to-words.cpp
│   │
│   ├── geometry/
│   │   ├── triangle-angles.cpp
│   │   ├── triangle-validation.cpp
│   │   ├── rectangle-area.cpp
│   │   ├── circle-calculator.cpp
│   │   ├── square-calculator.cpp
│   │   └── cartesian-plane.cpp
│   │
│   └── conversions/
│       ├── hours-to-seconds.cpp
│       └── seconds-to-time-format.cpp
│
├── 02-cpp-intermediate/
│   ├── README.md
│   ├── arrays-vectors/
│   │   ├── load-vector.cpp
│   │   ├── vector-operations.cpp
│   │   ├── vector-sequence-statistics.cpp
│   │   └── array-sorting.cpp
│   │
│   ├── quadratic-equations/
│   │   ├── quadratic-solver.cpp
│   │   └── quadratic-solver-v2.cpp
│   │
│   └── statistics/
│       └── average-n-values.cpp
│
├── 03-cpp-strings-data/
│   ├── README.md
│   ├── string-operations/
│   │   └── string-exercises.cpp
│   │
│   ├── fiscal-code-validator/
│   │   ├── README.md
│   │   ├── fiscal-code-v1.cpp
│   │   ├── fiscal-code-v2.cpp
│   │   ├── fiscal-code-final.cpp
│   │   ├── fiscal-code-working.cpp
│   │   └── [other iterations]
│   │
│   └── structures/
│       ├── student-grades-table.cpp
│       └── data-table.cpp
│
├── 04-cpp-matrices/
│   ├── README.md
│   ├── magic-square/
│   │   ├── magic-square-v1.cpp
│   │   ├── magic-square-bisignano-ferrara.cpp
│   │   └── magic-square-final.cpp
│   │
│   └── matrix-operations/
│       └── matrix-functions.cpp
│
├── 05-cpp-games/
│   ├── README.md
│   ├── tombola-lottery/
│   │   ├── README.md
│   │   ├── tombola-v1.cpp
│   │   ├── tombola-bisignano-mode.cpp
│   │   ├── tombola-final.cpp
│   │   ├── cards-generator.cpp
│   │   ├── column-row-border.cpp
│   │   ├── multi-player-cases/
│   │   │   ├── case-3-players.cpp
│   │   │   └── case-1-6-players.cpp
│   │   └── table-variants/
│   │       └── table-6-players.cpp
│   │
│   └── frame-game/
│       ├── frame-2-players-small.cpp
│       ├── frame-3-players-small.cpp
│       ├── frame-4-players-small.cpp
│       ├── frame-2-players-fullscreen.cpp
│       ├── frame-3-players-fullscreen.cpp
│       ├── frame-4-players-fullscreen.cpp
│       ├── frame-5-players-fullscreen.cpp
│       ├── frame-6-players-fullscreen.cpp
│       ├── frame-7-players-fullscreen.cpp
│       └── frame-4-players-fullscreen-alt.cpp
│
├── 06-arduino-projects/
│   ├── README.md
│   ├── led-control/
│   │   ├── README.md
│   │   ├── blink-button.ino
│   │   ├── pwm-led-control.ino
│   │   ├── brightness-regulator-potentiometer.ino
│   │   └── christmas-lights.ino
│   │
│   ├── sensors/
│   │   ├── README.md
│   │   ├── photoresistor-buzzer.ino
│   │   ├── photoresistor-led.ino
│   │   ├── potentiometer-analog.ino
│   │   └── reaction-timer-serial.ino
│   │
│   ├── infrared-control/
│   │   ├── README.md
│   │   ├── tv-b-gone/
│   │   │   ├── tv-b-gone.ino
│   │   │   ├── main.h
│   │   │   └── world-ir-codes.h
│   │   └── ir-remote-codes.h
│   │
│   └── security/
│       ├── README.md
│       └── rubber-ducky/
│           └── rubber-ducky-notes.txt
│
├── 07-notes-docs/
│   ├── README.md
│   ├── cpp-learning-notes/
│   │   ├── cpp-includes.txt
│   │   ├── cpp-reference-programs/
│   │   └── styling-guide/
│   │
│   ├── external-documents/
│   │   ├── number-guessing-game.pdf
│   │   ├── linux-nitrux-review.pdf
│   │   ├── lan-interconnection-report.pdf
│   │   └── project-proposal.pdf
│   │
│   └── tools-config/
│       └── astyle-formatting/
│
└── maintenance/
    └── [archive for obsolete or archived code]
```

---

## Mapping Old → New Structure

### Arduino Projects
| Old Path | New Path |
|----------|----------|
| `Arduino progetti/led-pulsante/` | `06-arduino-projects/led-control/` |
| `Arduino progetti/Output_analog_PWM/` | `06-arduino-projects/led-control/pwm-led-control.ino` |
| `Arduino progetti/regolatore_luminosit__led__potenz._/` | `06-arduino-projects/led-control/brightness-regulator.ino` |
| `Arduino progetti/luci natale/` | `06-arduino-projects/led-control/christmas-lights.ino` |
| `Arduino progetti/Buzzer_fotoresistori/` | `06-arduino-projects/sensors/photoresistor-buzzer.ino` |
| `Arduino progetti/Fotoresistenza/` | `06-arduino-projects/sensors/photoresistor-led.ino` |
| `Arduino progetti/Potenziometro/` | `06-arduino-projects/sensors/potentiometer-analog.ino` |
| `Arduino progetti/cronometro_reazioni_com.ser/` | `06-arduino-projects/sensors/reaction-timer-serial.ino` |
| `Arduino progetti/Arduino-TV-B-Gone/` | `06-arduino-projects/infrared-control/tv-b-gone/` |
| `Arduino progetti/Rubber ducky/` | `06-arduino-projects/security/rubber-ducky/` |

### C++ Programs - Q1 (Fundamentals)
| Old Path | New Path |
|----------|----------|
| `Informatica/1°Quadrimestre/Dev C++ programmi facili/` | `01-cpp-fundamentals/` |
| Armstrong series files | `01-cpp-fundamentals/basic-algorithms/armstrong-numbers.cpp` |
| Fibonacci series files | `01-cpp-fundamentals/basic-algorithms/fibonacci-series.cpp` |
| Geometry files (triangolo, rettangolo, cerchio, etc.) | `01-cpp-fundamentals/geometry/` |
| Time conversion files | `01-cpp-fundamentals/conversions/` |

### C++ Programs - Q1 (Intermediate)
| Old Path | New Path |
|----------|----------|
| `Informatica/1°Quadrimestre/Dev C++ programmi sui vettori/` | `02-cpp-intermediate/arrays-vectors/` |
| `Informatica/1°Quadrimestre/Dev C++ programmi intermedi A1/` | `02-cpp-intermediate/` |
| Quadratic equation files | `02-cpp-intermediate/quadratic-equations/` |

### C++ Programs - Q2
| Old Path | New Path |
|----------|----------|
| `Informatica/2°Quadrimestre/Esercitazioni ed esempi/Stringhe/` | `03-cpp-strings-data/string-operations/` |
| Fiscal code files | `03-cpp-strings-data/fiscal-code-validator/` |
| `Informatica/2°Quadrimestre/Esercitazioni ed esempi/Struct/` | `03-cpp-strings-data/structures/` |
| `Informatica/2°Quadrimestre/Esercitazioni ed esempi/Matrici/` | `04-cpp-matrices/magic-square/` |
| `Informatica/2°Quadrimestre/Esercitazioni ed esempi/Funzioni/` | `02-cpp-intermediate/arrays-vectors/` |

### Games
| Old Path | New Path |
|----------|----------|
| `Informatica/Giochi/Tombola/` | `05-cpp-games/tombola-lottery/` |
| `Informatica/Giochi/Cornice/` | `05-cpp-games/frame-game/` |
| `Informatica/Giochi/Obsoleto/` | `maintenance/` |
| `Informatica/Giochi/Ruota/` | `maintenance/` |

### Documentation & Notes
| Old Path | New Path |
|----------|----------|
| `Informatica/Appunti Dev C++/` | `07-notes-docs/cpp-learning-notes/` |
| PDF files | `07-notes-docs/external-documents/` |
| `Informatica/Capizzi 01.12.17/` | `07-notes-docs/cpp-learning-notes/` or `maintenance/` |

---

## Naming Conventions

### File Naming Rules
1. **Use English, lowercase with hyphens** for multi-word names
   - ✅ `bright-regulator.ino`
   - ❌ `regolatore_luminosit__led__potenz._.ino`

2. **Be descriptive and specific**
   - ✅ `magic-square-final.cpp`
   - ❌ `SenzaTitolo10.cpp`

3. **Avoid version indicators in filenames** (keep iterations organized by folder)
   - ✅ `fiscal-code/fiscal-code-v1.cpp`
   - ❌ `Codice_Fiscale_1.0_v2_funzionante_corretto.cpp`

4. **Remove special characters**
   - ✅ `time-to-seconds.cpp`
   - ❌ `da ore,minuti a secondi.cpp`

5. **Arduino files should have `.ino` extension only**
   - ✅ `led-control.ino`
   - ❌ `cronometro_reazioni_com.ser..ino`

### Folder Naming Rules
1. **Use numeric prefixes** for main category folders (01-, 02-, etc.) to enforce logical ordering
2. **Use English, lowercase with hyphens**
   - ✅ `led-control/`
   - ❌ `led-pulsante/`
3. **Be topic-specific**
   - ✅ `photoresistor-buzzer.ino`
   - ❌ `Buzzer_fotoresistori/`

---

## Benefits of This Reorganization

| Aspect | Current | Proposed |
|--------|---------|----------|
| **Navigation** | Deep nesting (5-6 levels) | Clear hierarchy (3-4 levels max) |
| **Language** | Mixed Italian/English | Consistent English |
| **File Naming** | Inconsistent, special chars | Consistent kebab-case |
| **Discoverability** | Hard to find specific topics | Organized by topic/skill level |
| **Scalability** | Difficult to add new projects | Clear structure for growth |
| **Maintenance** | Multiple obsolete files mixed in | Dedicated maintenance folder |
| **Documentation** | Minimal | Each section has README |

---

## Migration Steps

### Phase 1: Preparation
1. [ ] Create all new folder structure
2. [ ] Create README files for each major section explaining the content
3. [ ] Backup current structure in git branch

### Phase 2: File Reorganization
1. [ ] Move Arduino projects to `06-arduino-projects/`
2. [ ] Move C++ fundamental programs to `01-cpp-fundamentals/`
3. [ ] Move C++ intermediate to `02-cpp-intermediate/`
4. [ ] Move C++ string/data programs to `03-cpp-strings-data/`
5. [ ] Move C++ matrix programs to `04-cpp-matrices/`
6. [ ] Move games to `05-cpp-games/`

### Phase 3: Naming Normalization
1. [ ] Rename all files to English, lowercase with hyphens
2. [ ] Fix duplicate/nested files
3. [ ] Remove obsolete versions (keep only final versions or all iterations in version-control folder)

### Phase 4: Documentation
1. [ ] Update main README.md
2. [ ] Create README for each major section
3. [ ] Add build/run instructions where applicable
4. [ ] Create this refactor as reference in git history

### Phase 5: Cleanup
1. [ ] Move obsolete files to `maintenance/`
2. [ ] Verify all files are accessible and compilable
3. [ ] Commit changes with clear message

---

## Quick Implementation Checklist

```
High Priority:
- [ ] Create numbered top-level folders (01-06)
- [ ] Move Arduino projects
- [ ] Move games (separate Tombola and Frame game)
- [ ] Rename large category files

Medium Priority:
- [ ] Reorganize C++ Q1/Q2 exercises by concept
- [ ] Remove special characters from filenames
- [ ] Consolidate duplicate fiscal code versions

Low Priority:
- [ ] Archive obsolete experiments to maintenance/
- [ ] Add comprehensive READMEs
- [ ] Add metadata (difficulty, topics, prerequisites)
```

---

## Notes

- **Preserve git history**: Use `git mv` during migration to maintain commit history
- **Keep multiple iterations**: For learning projects (especially fiscal code), consider keeping numbered versions or creating `_archive/` subfolder showing progression
- **Test compilation**: After reorganizing, verify all programs still compile
- **Consider adding tags**: Use git tags to mark "Q1 projects", "Arduino sensors", etc.
