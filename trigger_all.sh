#!/bin/bash

# List all workflows
workflows=("tictactoe.yml" "calculator.yml" "nameflipper.yml" "menu.yml" "chatgptgame.yml")

# Branch name (can be dynamically set or hardcoded)
branch="main"

# Trigger each workflow
for workflow in "${workflows[@]}"; do
    echo "Triggering workflow: $workflow"
    gh workflow run "$workflow" --ref "$branch"
done
