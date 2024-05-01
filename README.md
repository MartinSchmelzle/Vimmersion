# Vimmersion
A terminal-based IDE that combines the power of tmux, Neovim and ranger. It aims to maintain the lightweight, blazingly fast and hypercustomizable features of a terminal-based workflow while also having the great out-of-the box experience and smoothness of an IDE.

The goal is to use tmuxto split the full-screen terminal in a useful way: 
There is a file explorer (ranger) on the left, 
a text editor (Neovim, in my case Lazyvim),
and a terminal to run code and few the code's output in the bottom.
The resulting layout is somewhat similar to an IDE like VSCode or IntelliJ, except all tools involved are terminal-based applications with VIM keybindings.

This project is still very new - I would love to see you contribute.

## Installation
1. Install tmux, ranger and Neovim (I recommend Lazyvim as my Neovim distribution of choice)
2. Make sure each of them runs.
3. Optional: set the tmux prefix key to Ctrl-a instead of the default Ctrl-b. Also add VIM keybindings to your tmux.conf file. I've posted my tmux.conf into the repo to make this easier if you want it.
4. git clone the repository, add it to the PATH variable.
5. cd to the directory you would like to edit your code in
6. type "run_vimmersion.sh" into the terminal
Up until now, I have only run this on Ubuntu 23.10, but it should work on any Linux machine.
Future versions will aim to make this installation process much easier.

## Usage
- Vimmersion's usage is the combined usage of tmux, ranger and Neovim. If you have understood these three terminal applications, you have understood Vimmersion.
- After setting up tmux.conf (see above), you can use your prefix key + h/j/k/l to navigate between the file manager, the text editor and the terminal.
- In ranger, you can use h/j/k/l to navigate through your file tree. ranger has file preview on by default; type 'zp' in ranger to turn this off. Future versions will have file preview off by default.
- In Neovim, use VIM keybindings to navigate text files of your choosing. I highly recommend using a Neovim distribution together with Vimmersion - they do a lot of their magic in the background.
- Feel free to configure ranger, tmux and Neovim to your liking; Vimmersion will support all your ricing ambitions!

## Planned changes
- Files opened through ranger will automatically be piped to Neovim, instead of being opened in the file explorer window.
- A streamlined installation process will make installing the software easy. Vimmersion is all about great out-of-the-box experience and usability, and the installation process should reflect that.
- A one-button solution to run "the code" in analogy to VSCode's F5 button to speed up the workflow.
- A ranger-based settings utility to provide something less error-prone and more accessible than editing .conf files.
