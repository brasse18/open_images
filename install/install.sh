#!/bin/sh

sudo mkdir /opt/open_images
sudo chmod 777 /opt/open_images
cp open_images /opt/open_images/.
chmod +x /opt/open_images/open_images
cp open_images.png /opt/open_images/.
cp open_images.desktop ~/.local/share/applications/.
#sudo chmod +x ~/.local/share/applications/open_images.desktop
