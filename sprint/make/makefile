# Makefile for server and client programs

# Directory structure
SRCDIR = ../src
INCDIR = ../include
BINDIR = ../bin
OBJDIR = ../obj

# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -g
LDFLAGS =

# Targets
all: $(BINDIR)/server $(BINDIR)/client

# Linking the server executable
$(BINDIR)/server: $(OBJDIR)/server.o $(OBJDIR)/sf_searchForFile.o $(OBJDIR)/sf_searchForString.o $(OBJDIR)/sf_displayFileContents.o
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^

# Linking the client executable
$(BINDIR)/client: $(OBJDIR)/client.o
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^

# Compiling server source files
$(OBJDIR)/server.o: $(SRCDIR)/server.c $(INCDIR)/server_functions.h $(INCDIR)/loggers.h | $(BINDIR)
	$(CC) $(CFLAGS) -I$(INCDIR) -c $< -o $@

$(OBJDIR)/sf_searchForFile.o: $(SRCDIR)/sf_searchForFile.c $(INCDIR)/loggers.h | $(BINDIR)
	$(CC) $(CFLAGS) -I$(INCDIR) -c $< -o $@

$(OBJDIR)/sf_searchForString.o: $(SRCDIR)/sf_searchForString.c $(INCDIR)/loggers.h | $(BINDIR)
	$(CC) $(CFLAGS) -I$(INCDIR) -c $< -o $@

$(OBJDIR)/sf_displayFileContents.o: $(SRCDIR)/sf_displayFileContents.c $(INCDIR)/loggers.h | $(BINDIR)
	$(CC) $(CFLAGS) -I$(INCDIR) -c $< -o $@

# Compiling client source file
$(OBJDIR)/client.o: $(SRCDIR)/client.c | $(BINDIR)
	$(CC) $(CFLAGS) -I$(INCDIR) -c $< -o $@

# Create the bin directory if it doesn't exist
$(BINDIR):
	mkdir -p $(BINDIR)

# Clean target
clean:
	rm -rf $(OBJDIR)/*.o $(BINDIR)/server $(BINDIR)/client
