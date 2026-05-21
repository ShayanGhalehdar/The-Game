# The Game — A Real-Time Arcade Survival Game in C

A grid-based arcade/survival game written entirely in C as a final project for an introductory C programming course. The player navigates a 12×12 board, manages health, cash, and fuel, fights with a revolver, and uses a shop and a round-based level-up system.

## Gameplay

- **Board:** 12 × 12 cells rendered to the terminal each turn.
- **Status:** Health, Cash, Fuel — all decay or change depending on actions and the round.
- **Controls:**
  - `W` / `A` / `S` / `D` — move up / left / down / right
  - `R` — fire the revolver
  - `Q` — open the shop (buy upgrades / replenish resources)
  - `N` — advance to the next round
- **Progression:** Each round increases difficulty; shop upgrades and accumulated cash let you level up your gear.
- **Game Over:** When health drops to zero.

## Repository Structure

```
The Game.c     — Full game source (~1.1k LoC, single file)
The Game.exe   — Prebuilt Windows binary
```

## How to Build

The game is a single C file with no external dependencies:

```bash
gcc -O2 -Wall "The Game.c" -o the_game
./the_game
```

(Use the bundled `The Game.exe` on Windows to play without rebuilding.)

## License

MIT — see [LICENSE](LICENSE).
