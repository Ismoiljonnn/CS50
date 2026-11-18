from openai import OpenAI

client = OpenAI()

user_prompt = input("Prompt: ")
system_promt = "Limit your answer to one sentence."

responce = client.responses.create(
  input=user_prompt,
  instructions=system_promt,
  model="gtp-5"
)

print(responce.output_text)