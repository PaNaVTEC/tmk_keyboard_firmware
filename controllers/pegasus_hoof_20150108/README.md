Pegasus Hoof controller firmware
======================
Custom controller for the Costar Majestouch TKL keyboard designed by bpiphany.

*Note that this is not the official firmware*

Build
-----
Move to this directory then just run `make` like:

    $ make -f Makefile.lufa clean && make -f Makefile.lufa

Or if you want to make & upload to your board:

    $ make -f Makefile.lufa clean && make -f Makefile.lufa dfu

At the moment only the LUFA stack is supported.


Bootloader
---------
To enter bootloader by hardware use a magnet above the controller before connecting the usb cable.

It is still possible to use Boot Magic and Command (LSFT+RSFT+PAUS) to access the bootloader though.
