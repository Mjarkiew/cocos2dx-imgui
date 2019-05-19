@echo off

set PROJECT_DIR=%~dp0
set BUILD_DIR=%PROJECT_DIR%\Builds\win32\

if not exist %BUILD_DIR% mkdir %BUILD_DIR%

pushd %BUILD_DIR%
if not exist "CMakeCache.txt" (
    cmake %PROJECT_DIR% -G"Visual Studio 14 2015" -Tv140 -DGEN_COCOS_PREBUILT=OFF -DUSE_COCOS_PREBUILT=ON -DCMAKE_BUILD_TYPE=Debug
)
msbuild /p:Configuration=Debug,Optimize=false cocos2dx-imgui.vcxproj
popd
goto:EOF