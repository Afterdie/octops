@echo off

echo "Building Octops..."

python -m nuitka ^
    --onefile ^
    --follow-imports ^
    --standalone ^
    --include-plugin-files=screens/*.py ^
    --include-data-dir=assets=assets ^
    --include-plugin-files=deps.py ^
    --windows-icon-from-ico=assets\img\app-icon.ico ^
    --disable-console ^
    --show-progress ^
    --verbose ^
    --show-scons ^
    --company-name=MLSAKIIT ^
    --product-name=Octops ^
    --file-version=1.0.3 ^
    --file-description="Octops v1.0.3" ^
    octops.py ^
    -o Octops.exe

echo "Build complete."