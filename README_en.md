# 1. General Project Overview

The goal of this project is to provide a client-server tool for automatically grading coding exercises. The project aims to resemble the functionality of the examshell software from the 42 school. The objective is to make it as customizable as possible.

# 2. Project Progress

The project is currently hardcoded to grade C projects. It is functional in this scope but remains basic and needs further work to improve usability.

# 3. Using the Project
## 3.1. Installation

To function, the project requires the following to be installed on the server computer:

    gcc (or another compiler that needs to be configured for each topic)
    norminette
    diff
    nm

## 3.2. Preparation

### 3.2.1. Server

Before starting the server, configure the config.json file with the port on which the server should listen.
This is not mandatory to use the 2121 port, it's a possibility.

### 3.2.2. Subjects

The subjects should be organized in the server folder with the following structure:

```

server
└───subjects
    └───levelX
        └───YY
            ├───subject.txt
            ├───main.c
            ├───function.c
            ├───config.json
```

Details about the files:

- It is important to start with level0.
- YY corresponds to the name of the exercise, it should not contain spaces and should be limited to ASCII characters.
- subject.txt is the exercise topic, it can be in any format you choose.
- main.c is the main file of the exercise, it should use the required function and write the result to the standard output. It should include the prototype of the function to be tested.
- function.c is the file containing the reference function, which should be prototyped as requested in the subject.
- config.json is optional, it can contain the following keys:
    - `send_trace` (boolean) : If true, the server will send the execution trace of the program to the client.
    - `authorized_functions` (array of strings) : List of symbols allowed in the `function.c` file returned by `nm -u`. Note that the symbols must follow the formatting of `nm -u` (e.g., `_write`). **[Currently disabled as it does not function properly depending on the version of `nm`]**
    - `compiler` (string) : Command to use to compile the program.
    - `compiler_flags` (string) : List of flags to use for compiling the program.

### 3.2.3. Clients

Client computers only need the client folder. The config.json file should be configured with the server's IP address and the port on which the server listens.

### 3.2.4. Warning

The client will modify the `~/rendu` and `~/subject` folders. Ensure that there are no important files in these folders.

## 3.3. Commands

### 3.3.1. Server

On the server, the available commands are:

- `help` : Displays help.
- `infos` : Displays information about the server.
- `clients` : Displays connected clients and their status.
- `subject <client id> <level> [subject name]` : Allows changing the subject of a client. If the subject is not specified, it will be chosen randomly.

### 3.3.2. Client

On the client, the available commands are:

- `help`: Displays help.
- `grademe`: Sends files to the server and initiates grading.

To launch the client on other computers:

- Launch the server on one computer.
- On the other computers, in client/config.json: modify the "host" with the server computer's IP.

Subject bank:
Several subjects per level (on average 3 subjects for each of the 7 levels)
Random choice

# 4. To do list:

- more subjects
- in case of a client disconnection, be able to retrieve the history of exercises already completed
- script to refresh the token