# Use the official Ubuntu base image
FROM ubuntu:latest

# Install necessary packages
RUN apt-get update && apt-get install -y \
    build-essential \
    clang \
    lldb \
    gdb \
    cmake \
    && rm -rf /var/lib/apt/lists/*

# Set the working directory
WORKDIR /usr/src/app

# Copy the entire project into the container
COPY . .

# Compile all C++ files
RUN find . -name "*.cpp" -exec clang++ -o {}.out {} \;

# Default command to run when the container starts
CMD ["bash"]