
Debian
====================
This directory contains files used to package 1noded/1node-qt
for Debian-based Linux systems. If you compile 1noded/1node-qt yourself, there are some useful files here.

## 1node: URI support ##


1node-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install 1node-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your 1nodeqt binary to `/usr/bin`
and the `../../share/pixmaps/1node128.png` to `/usr/share/pixmaps`

1node-qt.protocol (KDE)

