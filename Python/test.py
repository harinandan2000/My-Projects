# from twilio.rest import Client

# # Your Twilio Account SID and Auth Token
# account_sid = 'your_account_sid'
# auth_token = 'your_auth_token'

# # Create a Twilio client
# client = Client(account_sid, auth_token)

# # List of recipients with their phone numbers
# recipients = {
#     'Friend 1': '+918789068032',
#     'Friend 2': '+917766968477',
#     # Add more recipients as needed
# }

# # Message to send
# message_body = 'Hello! This is a test message from your Python program.'

# # Send messages to each recipient
# for name, phone_number in recipients.items():
#     try:
#         message = client.messages.create(
#             body=message_body,
#             from_='your_twilio_phone_number',  # Your Twilio phone number
#             to=phone_number
#         )
#         print(f'Message sent to {name} at {phone_number}: {message.sid}')
#     except Exception as e:
#         print(f'Error sending message to {name} at {phone_number}: {str(e)}')




from twilio.rest import Client

# Your Twilio Account SID and Auth Token
account_sid = 'your_account_sid'
auth_token = 'your_auth_token'

# Create a Twilio client
client = Client(account_sid, auth_token)

# List of phone numbers to send messages to
phone_numbers = ['+1234567890', '+9876543210', '+1112223333']

# Message to send
message_body = 'Hello! This is a test message from your Python program.'

# Send messages to each phone number
for phone_number in phone_numbers:
    try:
        message = client.messages.create(
            body=message_body,
            from_='your_twilio_phone_number',  # Your Twilio phone number
            to=phone_number
        )
        print(f'Message sent to {phone_number}: {message.sid}')
    except Exception as e:
        print(f'Error sending message to {phone_number}: {str(e)}')


# Your Twilio Account SID and Auth Token
account_sid = 'your_account_sid'
auth_token = 'your_auth_token'

# Create a Twilio client
client = Client(account_sid, auth_token)

# List of phone numbers to send messages to
phone_numbers = ['+917766968477', '+918789068032', '']

# Message to send
message_body = 'Hello! This is a test message from your Python program.'

# Send messages to each phone number
for phone_number in phone_numbers:
    try:
        message = client.messages.create(
            body=message_body,
            from_='your_twilio_phone_number',  # Your Twilio phone number
            to=phone_number
        )
        print(f'Message sent to {phone_number}: {message.sid}')
    except Exception as e:
        print(f'Error sending message to {phone_number}: {str(e)}')
