#!/bin/bash

# List all workflows
workflows=("tictactoe.yml" "calculator.yml" "nameflipper.yml" "menu.yml" "chatgptgame.yml")

# Branch name (can be dynamically set or hardcoded)
branch="testbranch"

# Trigger each workflow
for workflow in "${workflows[@]}"; do
    workflow_path="$branch/.github/workflows/$workflow"

    if [ -f "$workflow_path" ]; then
        echo "Triggering workflow: $workflow"
        gh workflow run "$workflow_path" --ref "$branch"
    else
        echo "Error: Workflow $workflow not found in $branch/.github/workflows/"
    fi
done