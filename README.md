# OpenCV

In this repo I will push OpenCV with C++.
Later I will include some other topics e.g. YOLO , OCR etc.


 # Install OpenCV

### Installing required packages and tools 
 

```bash
sudo apt install -y g++ cmake make git libgtk2.0-dev pkg-config
```

### Download the source
 - Go to [OpenCV](https://opencv.org/releases/)
 - Choose required release and go GitHub
 - Clone [Source Code](https://github.com/opencv/opencv.git)

```bash
git clone url
```

### Build the source

```bash
mkdir -p build && cd build
```

### Generate the build scripts using cmake

```bash
cmake ../opencv
```

### Build the source using make

```bash
make -j4
```
### Install the OpenCV package

```bash
sudo make install
```

*The header files are at the location*

```bash
/usr/local/include/opencv4
```