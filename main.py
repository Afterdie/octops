import tkinter as tk

root = tk.Tk()

root.geometry("500x500")
root.title("First Commit")

label = tk.Label(root, text="BRUH")
label.pack(padx=20, pady=20)

entry = tk.Entry(root)
entry.pack()

btn = tk.Button(root, text="Print value", command = lambda: print(entry.get()))
btn.pack()


root.mainloop()