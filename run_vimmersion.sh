#!/bin/bash

# Toggle full-screen property of terminal
# wmctrl -r :ACTIVE: -b toggle,maximized_vert,maximized_horz
# Start a new tmux session and send the keys 'vms' followed by Enter
tmux new-session \; send-keys '~/vms' Enter
