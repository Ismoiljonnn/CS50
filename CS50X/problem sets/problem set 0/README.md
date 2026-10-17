# Space Dodge

A space-themed dodge game built with Scratch for CS50x Problem Set 0.

- **Play Online:** [Scratch Project Link](https://scratch.mit.edu/projects/1392663585)

---

## Overview
Space Dodge is an arcade-style game where players control a rocketship to dodge falling space rocks while collecting stars to increase their score.

### Features & Mechanics
- **Dynamic Difficulty:** As the score exceeds 100 points, rock spawn frequency increases and multiple cloned rocks enter the stage.
- **Cloning System:** Efficient use of Scratch clones to handle rock generation and cleanup upon collision or off-screen positioning.
- **State Management:** Distinct game states (Start, Gameplay, Game Over) controlled via broadcast messages and sprite visibility toggles.
- **Audio Integration:** Background music and sound effects for UI interactions and collecting stars.

---

## Key Concepts Learned
Through building this project for CS50x, I practiced fundamental computer science and computational thinking concepts:

- **State Management & Event-Driven Programming:** Managed game states (Start Menu, Gameplay, Game Over) using Scratch's `broadcast` and `when I receive` messaging system to synchronize sprite visibility and behaviors.
- **Cloning & Memory Cleanup:** Implemented dynamic object creation with clones (`create clone of myself`) to handle multiple hazards on screen simultaneously, ensuring memory management by deleting clones (`delete this clone`) when off-screen or upon game reset.
- **Conditional Logic & Game Loops:** Controlled game flow using `repeat until` loops, conditional statements (`if/then`), and collision detection (`touching?`).
- **Variables & Dynamic Difficulty:** Used global variables (`Score` and `Speed`) to dynamically adjust gameplay parameters, increasing hazard frequency and speed once the score threshold is reached.
- **Audio & Visual Synchronization:** Integrated background music and sound effects mapped to specific player actions and UI events.

---

## Folder Structure
- `Space Dodge.sb3` — Source file for the Scratch project.
- `README.md` — Project overview and documentation.