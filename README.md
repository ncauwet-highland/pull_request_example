# pull_request_example
**Mario says hi -\_(0_0)_/-**

Small C project used to demonstrate safe Git workflows:
- creating feature branches
- making diverging changes
- opening pull requests
- resolving merge conflicts carefully

## What this project does

Builds a tiny executable that prints a greeting.

Examples:
- `demo_app`
- `demo_app --name Intern --repeat 3`

## Build and run

### Windows (PowerShell)

```powershell
cmake -S . -B build
cmake --build build
.\build\Debug\demo_app.exe --name Intern --repeat 2
```

If your generator does not create a `Debug` folder, run:

```powershell
.\build\demo_app.exe --name Intern --repeat 2
```

### Linux/macOS

```bash
cmake -S . -B build
cmake --build build
./build/demo_app --name Intern --repeat 2
```

## Suggested merge-training exercise

1. Create and push a baseline commit from `main`.
2. Create two branches from the same commit:
	- `feature/a-message-change`
	- `feature/b-argument-change`
3. In each branch, edit `main.c` in overlapping lines.
4. Open two PRs.
5. Merge one PR.
6. Rebase or merge `main` into the second branch and resolve conflicts.
7. Verify locally:
	- project still builds
	- executable still runs
8. Complete second PR.

This repo is intentionally simple so the intern can focus on Git behavior, not application complexity.
