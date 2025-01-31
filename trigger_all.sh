#!/bin/bash

# List all workflows
workflows=("tictactoe.yml" "calculator.yml" "nameflipper.yml" "menu.yml")

# Trigger each workflow
for workflow in "${workflows[@]}"; do
    echo "Triggering workflow: $workflow"
    gh workflow run "$workflow"
done
