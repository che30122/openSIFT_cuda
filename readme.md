## Intro
The serial version of code forked from [opensift](https://github.com/robwhess/opensift).

And we try to parallelize it aim to improve the performance of SIFT algorithm.

We also change some code foked from [opensift](https://github.com/robwhess/opensift) to make this code portable to OpenCV4.

## Requirements
The code requires the [OpenCV library](http://sourceforge.net/projects/opencvlibrary/) (we use version 4.5.1)
Some functions require [GTK+2](http://www.gtk.org/)
The OpenCV installation guide can be found [here](https://vitux.com/opencv_ubuntu/)
In order to run parallelized version, [CUDA](https://developer.nvidia.com/cuda-downloads) is needed (we use version 11.2)

## Building

    $ cd src

Make

    $ make

After "make" command success, you can see the executable file in "bin" directory.
## How to run

    $ cd bin

### Run SIFT algorithm to match the feature of two image.

    $ ./sift <img1> <img2>

After the command is complete and success, you will get output image "match.png" which can show the result.

For example, you can run the command below, and use the image we provide.

    $ ./sift ../pic/beaver.png ../pic/beaver_xform.png

### Do 3 channel image gaussian blur convolution.

    $ ./conv <input_img> <output_img> <sigma of gaussian> 

