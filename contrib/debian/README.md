Debian
======

This directory contains files used to package xumad/xuma-qt
for Debian-based Linux systems. If you compile xumad/xuma-qt yourself, there are some useful files here.

## xuma: URI support ##

xuma-qt.desktop (Gnome / Open Desktop)

To install:

	sudo desktop-file-install xuma-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your xuma-qt binary to `/usr/bin`
and the `../../share/pixmaps/xuma128.png` to `/usr/share/pixmaps`

xuma-qt.protocol (KDE)