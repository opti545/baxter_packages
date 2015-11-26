#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
    DESTDIR_ARG="--root=$DESTDIR"
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/josmiranda/bt_ws/src/baxter_interface"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/josmiranda/bt_ws/install/lib/python2.7/dist-packages:/home/josmiranda/bt_ws/build/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/josmiranda/bt_ws/build" \
    "/usr/bin/python" \
    "/home/josmiranda/bt_ws/src/baxter_interface/setup.py" \
    build --build-base "/home/josmiranda/bt_ws/build/baxter_interface" \
    install \
    $DESTDIR_ARG \
    --install-layout=deb --prefix="/home/josmiranda/bt_ws/install" --install-scripts="/home/josmiranda/bt_ws/install/bin"
