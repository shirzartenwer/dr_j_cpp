# Use the official Ubuntu base image
FROM ubuntu:latest

# Install necessary packages
RUN rm -rf /var/lib/apt/lists/* && \
    apt-get update --allow-releaseinfo-change && \
    apt-get install -y cmake && \
    apt-get install -y git && \
    apt-get install -y build-essential

# Set the working directory
WORKDIR /usr/src/app

# Copy the entire project into the container
COPY . .

# Compile all C++ files
RUN find . -name "*.cpp" -exec clang++ -o {}.out {} \;

# Default command to run when the container starts
CMD ["bash"]