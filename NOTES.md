# Notes
```
sudo apt-get update
sudo apt-get install build-essential python python3
```

# Links
https://wiki.qt.io/Qt_for_WebAssembly

## Emscripten
```
mkdir -p ~/repos
cd ~/repos
git clone https://github.com/emscripten-core/emsdk.git
cd ./emsdk
emsdk install sdk-1.38.30-64bit
emsdk activate --embedded sdk-1.38.30-64bit
source ~/repos/emsdk/emsdk_env.sh
```

## Qt
```
mkdir -p ~/repos
cd ~/repos
git clone -b 5.13 --single-branch https://code.qt.io/cgit/qt/qt5.git
cd qt5
./init-repository
./configure -xplatform wasm-emscripten -nomake examples -prefix $PWD/qtbase
make module-qtbase module-qtdeclarative
```
Add qtbase/bin to path in order to use qmake

## WASM
Create headers and sources for a qt app, currently no modal windows allowed, can only have one event loop (app.exec_)

`qmake -project  # Build an empty pro file for qt development, will name it whatever the parent folder is`

This should have already found all your sources and headers and added them into the pro file

Update pro file to include required qt binaries (Ex: QT += widgets core)

`qmake *.pro && make`

`python3 -m http.server  # This will start a simple web server to host the current directory`

Go to given url and append the name of the generated html file (Ex: localhost:5000/AppName.html)
