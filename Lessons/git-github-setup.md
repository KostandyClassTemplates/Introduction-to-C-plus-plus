# Setting Up Git and GitHub on Mac, Windows, and Visual Studio

This guide will walk you through setting up Git and GitHub on macOS, Windows, and Visual Studio Code, with step-by-step instructions for each platform.

---

## Understanding Git, GitHub, and Version Control

**Git** is a distributed version control system that helps you track changes in your code and collaborate with others. **GitHub** is a cloud-based platform for hosting Git repositories, enabling sharing, collaboration, and project management. Version control allows you to:
- Track changes and revert to previous versions
- Collaborate with others without overwriting work
- Manage code for multiple features and bug fixes
- Maintain a history of your project

**Key Concepts:**
- **Repository (repo):** A project folder tracked by Git
- **Commit:** A snapshot of your changes
- **Branch:** A parallel version of your project for features or fixes
- **Merge:** Combining changes from different branches
- **Clone:** Copying a remote repository to your computer
- **Push/Pull:** Sending changes to or receiving changes from a remote repository

---

## 1. Installing Git

### On macOS

1. Open Terminal and run:
   ```bash
   git --version
   ```
   If Git is installed, you'll see the version number. If not, you'll be prompted to install Xcode Command Line Tools. Click "Install" if prompted.

### On Windows

1. Download Git for Windows from [git-scm.com](https://git-scm.com/download/win).
2. Run the installer and follow the default setup instructions.
3. After installation, open Command Prompt and run:
   ```cmd
   git --version
   ```
   You should see the installed version number.

---

## 2. Setting Up a GitHub Account

Go to [github.com](https://github.com) and sign up for a free account. You will use this account to host and share your code repositories.

---

## 3. Configuring Git with Your GitHub Account

Set your username and email in Git (required for commits):

On macOS (Terminal) or Windows (Command Prompt):
```bash
git config --global user.name "Your Name"
git config --global user.email "your.email@example.com"
```

---

## 4. Installing Visual Studio Code (VS Code)

Download and install [VS Code](https://code.visualstudio.com/) for your operating system (macOS or Windows).

---

## 5. Setting Up Git in Visual Studio Code

1. Open VS Code and click the Source Control icon on the sidebar.
2. Click "Clone Repository" and enter your GitHub repository URL.
3. Follow the prompts to authenticate with GitHub if required.

---

## 6. Authenticating with GitHub in VS Code

When prompted, sign in to GitHub using your browser. This allows VS Code to access your repositories and push/pull changes.

---

## 7. Making Your First Commit

1. Make changes to a file in your repository.
2. Go to Source Control in VS Code, stage the changes, and write a commit message.
3. Click "Commit" to save your changes.

---

## 8. Pushing Changes to GitHub

Click "Push" in VS Code to upload your commits to GitHub. Your changes are now saved in your remote repository.

---

## Additional Resources

- [Git Documentation](https://git-scm.com/doc)
- [GitHub Docs](https://docs.github.com/en)
- [VS Code Docs](https://code.visualstudio.com/docs)

---

Feel free to ask questions if you need help with any step!
