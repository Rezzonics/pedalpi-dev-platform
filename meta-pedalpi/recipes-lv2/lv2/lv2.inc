SUMMARY = "LV2 is an open standard for audio plugins"
LICENSE = "ISC"
LIC_FILES_CHKSUM = "file://COPYING;md5=0383f162366b0c5a316292759a55d292"

SRC_URI = " \
    git://github.com/drobilla/lv2;protocol=git \
"
#    file://0001-Output-more-details-on-import-error-to-catch-missing.patch 
#    file://0001-Fix-build-for-python3-only-environments.patch 

S = "${WORKDIR}/git/"
#SRCREV = "56f064dce822a53ad668c38d1bb7b2b3025fe270"
SRCREV = "0fa4d4847eb6d5bb0f58da889933c94c37ecb730"
PV = "1.16.0"


inherit waf pkgconfig

