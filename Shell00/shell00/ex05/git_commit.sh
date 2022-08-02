#!/bin/bash

echo "$(git log --format="%H" --max-count=5)"
