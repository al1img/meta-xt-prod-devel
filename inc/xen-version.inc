
################################################################################
# Following inc file defines XEN version and needed glue info to get it
# built with the current yocto version
################################################################################
require ../meta-xt-images-domx/recipes-extended/xen/xen-4.13-thud.inc

SRC_URI = "git://github.com/xen-troops/xen.git;protocol=https;branch=RELEASE-4.13.0-xt0.1.prod-devel"
