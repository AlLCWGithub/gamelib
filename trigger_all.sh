#!/bin/bash

# Set the branch name (adjust as needed)
BRANCH_NAME="testbranch"

# List all workflows
workflows=("tictactoe.yml" "calculator.yml" "nameflipper.yml" "menu.yml" "chatgptgame.yml")

# Trigger each workflow
for workflow in "${workflows[@]}"; do
    echo "Triggering workflow: $workflow"
    gh workflow run "$workflow" --ref "$BRANCH_NAME"
done
