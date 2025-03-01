# importing libraries(streamlit)
import streamlit as st

# setting up page configurations
st.set_page_config(
    page_title="MadLibs",
    page_icon="icon.jpeg"
    )

# adding title with a image
st.title("Welcome to")
st.image("MadLibs/logo.png")

# taking inputs from the user
noun = st.text_input("Noun",placeholder="Ex:-girl")
verb = st.text_input("Verb",placeholder="Ex:-visit")
adjective = st.text_input("Adjective",placeholder="beautiful")
place = st.text_input("Place",placeholder="boston")

# story of the madlib
story = f"Once upon a time, there was a {adjective} {noun} who loved to {verb} in {place}"
print(story)

# defining container for the output    
container = st.container(border=True)

# button for generating madlib
if st.button("Generate",type="secondary"):
    container.success(story)
else:
    container.write("The MadLib will display here")

# reset button     
st.button("Reset",type="primary")

