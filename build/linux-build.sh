#!/bin/bash

echo "Building Octops..."

python -m nuitka \
    --onefile \
    --follow-imports \
    --standalone \
    --include-plugin-files=screens/*.py \
    --include-data-dir=assets=assets \
    --include-plugin-files=deps.py \
    --linux-icon=assets/img/app-icon.ico \
    --disable-console \
    --onefile \
    --show-scons \
    --company-name=MLSAKIIT  \
    --verbose \
    --product-name=Octops \
    --file-version=1.0.3 \
    --file-description="Octops v1.0.3" \
    octops.py \
    -o Octops.bin

echo "Build complete."