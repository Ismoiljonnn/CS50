from openai import OpenAi

client = OpenAi()

responce = client.responses.create(
  input="In one sentence, what is CS50?",
  model="gtp-5"
)

print(responce.output_text)