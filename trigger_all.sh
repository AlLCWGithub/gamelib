#!/bin/bash

# List of workflows
workflows=("tictactoe.yml" "calculator.yml" "nameflipper.yml" "menu.yml" "chatgptgame.yml")

# Branch name (can be dynamically set or hardcoded)
branch="main"

# Trigger each workflow
for workflow in "${workflows[@]}"; do
    # Check if the workflow file exists in the current branch
    if git ls-tree -r "$branch" --name-only | grep -q ".github/workflows/$workflow"; then
        echo "Triggering workflow: $workflow in branch: $branch"
        gh workflow run "$workflow" --ref "$branch"
    else
        echo "Workflow file $workflow does not exist in branch: $branch. Skipping..."
    fi
done